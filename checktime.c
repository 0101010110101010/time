int check_date(int year, int month, int day)
{
    if (year < 1900 || month <= 0 || month > 12
        || day <= 0 || day > 31)
          return -1;

    struct tm tm_new;
    tm_new.tm_year = year - 1900;
    tm_new.tm_mon = month - 1;
    tm_new.tm_mday = day;
    tm_new.tm_hour = 0;
    tm_new.tm_min = 0;
    tm_new.tm_sec = 0;

    time_t time_new = mktime(&tm_new);
    localtime_r(&time_new, &tm_new);

    if (tm_new.tm_year != year - 1900 || tm_new.tm_mon != month - 1 || tm_new.tm_mday != day)
          return -1;
    return 0;
}

