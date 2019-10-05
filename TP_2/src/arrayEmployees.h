/*
 * arrayEmployees.h
 *
 *  Created on: 4 oct. 2019
 *      Author: sergio
 */

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

    typedef struct
    {
        int id;
        int isEmpty;
        char name[51];
        char lastName[51];
        float salary;
        int sector;

    }Employee;

    /** \brief Indicates that all positions of the array are empty, setting the isEmpty flag in TRUE in all array positions
     *
     * \param list employee* Pointer to array of employees
     * \param len int Array length
     * \return Return -1 if error (NULL or invalid), 0 if no error
     *
     */
    int initEmployees (Employee* list, int len);

    /** \brief add in a existing list of employees the values received as parameters in the first empty position.
     * \param list employee* Pointer to array of employees
     * \param len int Array length
     * \param id int Id number
     * \param name[] char Name array
     * \param lastName[] char Last name array
     * \param salary float salary number
     * \param sector int Sector number
     * \return Return -1 if error (NULL or invalid), 0 if no error
     */
    int addEmployee (Employee* list, int len, int id, char name[], char lastName[], float salary, int sector);

    /** \brief request to the users the information for a new employee
     *
     * \param list Employee*
     * \param length int
     * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
     *
     */
    int controllerGetEmployee(Employee* list, int len);

    /** \brief Gets free space from the index
     *
     * \param list Employee* Pointer to array of employees
     * \param len int Array length
     * \return Return -1 if error (NULL or invalid), 0 if no error
     *
     */
    int findEmptySpace (Employee* list, int len);

    /** \brief find an Employee by Id en returns the index position in array.
     * \param list Employee* Pointer to array of employees
     * \param len int Array length
     * \param id int Id number
     * \return Return -1 if error (NULL or invalid), 0 if no error
     */
    int findEmployeeById (Employee* list, int len, int id);

    /** \brief Find an employee by id and asks what wants the user to modify
     *
     * \param list Employee* Pointer to array of employees
     * \param len int Array length
     * \return Return modified data
     *
     */
    int modifyEmployee (Employee* list, int len);

    /** \brief Remove a Employee by Id (put isEmpty Flag in 1).
     * \param list Employee* Pointer to array of employees
     * \param len int Array length
     * \param id int Id number
     * \return Return -1 if error (NULL or invalid), 0 if no error
     */
    int removeEmployee (Employee* list, int len, int id);

    /** \brief Request an id and deletes the register.
     *
     * \param list Employee*
     * \param length int
     * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
     *
     */
    int getDeleteEmployee(Employee *list,int len);

    /** \brief print the content of employees array.
     * \param list Employee* Pointer to array of employees
     * \param length int Array length
     * \return int.
     */
    int printEmployees (Employee* list, int len);

    /** \brief Sort the elements in the array of employees, the argument order indicate ascendente or descendente order.
     * \param list Employee* Pointer to array of employees
     * \param len int Array length
     * \param order int 1 for ascendente, 2 for descendente
     * \return Return -1 if error (NULL or invalid), 0 if no error
     */
    int sortEmployeeByName (Employee* list, int len, int order);


    /** \brief Shows the total ammount of salaries, the average of salaries and all employes with salaries greater than the average
     *
     * \param list Employee* Pointer to array of employees
     * \param len int Array length
     * \return void
     *
     */
    void averageEmployeesSalary (Employee* list, int len);

    /** \brief Verifies if there's at least one employee in the array
     *
     * \param list Employee* Pointer to array of employees
     * \param len int Array length
     * \return 0 if there's no emplotee, 1 if there's at least one
     *
     */
    int existEmployees (Employee* list, int len);

    /** \brief \brief Show informes
     *
     * \param list Employee* Pointer to array employees
     * \param len int Array length
     * \return void
     */
    void informesEmployees(Employee* list, int len);


#endif /* ARRAYEMPLOYEES_H_ */
