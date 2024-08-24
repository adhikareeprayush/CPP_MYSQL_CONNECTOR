# CPP MySQL Connector

A simple C++ application demonstrating MySQL database connectivity using the MySQL C API. This project showcases basic CRUD (Create, Read, Update, Delete) operations in a console-based interface.

## 🚀 Features

- Connect to a MySQL database
- Insert new records
- Delete existing records
- Update record information
- Simple console-based user interface

## 📋 Prerequisites

- C++ compiler with C++17 support
- CMake (version 3.28 or higher)
- MySQL Server (version 9.0 used in this example)
- MySQL C API (libmysql, typically included with MySQL Server)

## 🛠️ Setup and Installation

1. Clone the repository:
   ```
    git clone https://github.com/adhikareeprayush/CPP_MYSQL_CONNECTOR.git
    cd CPP_MYSQL_CONNECTOR
   ```

2. Update the `CMakeLists.txt` file with your MySQL paths:
   ```cmake
   include_directories("path/to/mysql/include")
   include_directories("path/to/mysql/lib")
   target_link_libraries(CPP_MYSQL_CONNECTOR "path/to/mysql/lib/libmysql.lib")
   ```

3. Update database connection details in `main.cpp`:
   ```cpp
   const char* HOST = "localhost";
   const char* USER = "root";
   const char* PASSWORD = "1234";
   const char* DB = "test_db";
   ```

4. Build the project:
   ```
   mkdir build && cd build
   cmake ..
   cmake --build .
   ```

## 🚀 Usage

Run the executable:
```
./CPP_MYSQL_CONNECTOR
```

Follow the on-screen menu to perform database operations.

## 🤝 Contributing

Contributions, issues, and feature requests are welcome! Feel free to check [issues page](https://github.com/yourusername/CPP_MYSQL_CONNECTOR/issues).

1. Fork the project
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📝 License

This project is [MIT](https://choosealicense.com/licenses/mit/) licensed.

## ⚠️ Disclaimer

This is a basic template for educational purposes. It lacks proper error handling and security features necessary for production environments. Always implement appropriate security measures and follow best practices in real-world applications.

## 🙏 Acknowledgments

- MySQL team for the C API
- All contributors to this project
