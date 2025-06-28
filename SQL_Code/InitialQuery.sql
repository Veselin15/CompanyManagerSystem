CREATE TABLE companies (
    id INT IDENTITY(1,1) PRIMARY KEY,
    name NVARCHAR(100) NOT NULL,
    password NVARCHAR(100) NOT NULL,
    address NVARCHAR(200) NULL,
    description NVARCHAR(500) NULL
);

CREATE TABLE departments (
    id INT IDENTITY(1,1) PRIMARY KEY,
    name NVARCHAR(100) NOT NULL
);

CREATE TABLE employees (
    id INT IDENTITY(1,1) PRIMARY KEY,
    full_name NVARCHAR(300) NOT NULL,
    email NVARCHAR(100) NOT NULL UNIQUE,
    phone NVARCHAR(15) NULL,
    hire_date DATE NOT NULL,
    department_id INT NULL,
    company_id INT NOT NULL,
    FOREIGN KEY (company_id) REFERENCES companies(id) ON DELETE CASCADE,
    FOREIGN KEY (department_id) REFERENCES departments(id) ON DELETE SET NULL

);

CREATE TABLE projects (
    id INT IDENTITY(1,1) PRIMARY KEY,
    name NVARCHAR(200) NOT NULL,
    description TEXT NULL,
    start_date DATE NULL,
    end_date DATE NULL,
    company_id INT NOT NULL,
    FOREIGN KEY (company_id) REFERENCES companies(id) ON DELETE CASCADE
);

CREATE TABLE  employee_project(
    employee_id INT NOT NULL,
    project_id INT NOT NULL,
    PRIMARY KEY (employee_id, project_id),

)


ALTER TABLE employee_project
ADD CONSTRAINT FK_employee_project_employee
    FOREIGN KEY (employee_id) REFERENCES employees(id) ON DELETE CASCADE;

ALTER TABLE employee_project
ADD CONSTRAINT FK_employee_project_project
    FOREIGN KEY (project_id) REFERENCES projects(id) ON DELETE NO ACTION;