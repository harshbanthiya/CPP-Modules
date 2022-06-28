
#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {

    _nbAccounts += 1;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex  << ";amount:" << _amount << ";created" << '\n';
    return ;
}

Account::~Account(void) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << '\n';
    return ;
}

int Account::getNbAccounts() {
    return _nbAccounts;
}

int Account::getTotalAmount() {
    return _totalAmount;
}

int Account::getNbDeposits() {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals() {
    return _totalNbWithdrawals;
}


void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << '\n';
}

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount();
    std::cout << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << '\n';
}

void Account::_displayTimestamp(void) {
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::cout << "[" << (now->tm_year + 1900);
    std::cout << std::setfill ('0') << std::setw(2) << (now->tm_mon + 1);
    std::cout << std::setfill('0') << std::setw(2) << (now->tm_mday);
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw(2) << (now->tm_hour);
    std::cout << std::setfill('0') << std::setw(2) << (now->tm_min);
    std::cout << std::setfill('0') << std::setw(2) << (now->tm_sec);
    std::cout << "] ";
}

void Account::makeDeposit(int deposit) {
    _amount += deposit;
    _nbDeposits += 1;
    _totalAmount += deposit;
    _totalNbDeposits += 1;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << "p_amount:" << _amount;
    std::cout << ";withdrawals:";
    if (_amount - withdrawal < 0)
    {
        std::cout << "refused" << '\n';
        return false;
    }
    _amount -= - withdrawal;
    _nbWithdrawals += 1;
    _totalAmount -= withdrawal;
    _totalNbDeposits += 1;
    std::cout << withdrawal << ";amount:" << _amount;
    std::cout << ";nb_withdrawals:" << _nbWithdrawals << '\n';
    return true;
}
