//#include <iostream>
//using namespace std;
//
//class menuItemType {
//    char* itemName;          
//    double itemPrice;       
//    int quantity;           
//    static int totalItemsCreated; 
//
//public:
//
//    menuItemType() {
//        itemName = nullptr;
//        itemPrice = 0.0;
//        quantity = 0;
//        totalItemsCreated++;
//    }
//
//    menuItemType(const char* name, double price, int qty) {
//        int size = strlen(name);
//        itemName = new char[size + 1];
//        for (int i = 0; i < size; i++) {
//            itemName[i] = name[i];
//        }
//        itemName[size] = '\0';
//
//        itemPrice = price;
//        quantity = qty;
//        totalItemsCreated++;
//    }
//
//    ~menuItemType() {
//        delete[] itemName;
//    }
//
//    void setItem(const char* name, double price) {
//        int size = strlen(name);
//        itemName = new char[size + 1];
//        for (int i = 0; i < size; i++) {
//            itemName[i] = name[i];
//        }
//        itemName[size] = '\0';
//
//        itemPrice = price;
//    }
//
//    void setQuantity(int qty) {
//        quantity = qty;
//    }
//
//    const char* getName() const {
//        return itemName;
//    }
//
//    double getPrice() const {
//        return itemPrice;
//    }
//
//    int getQuantity() const {
//        return quantity;
//    }
//
//    double calculateCost() const {
//        return itemPrice * quantity;
//    }
//
//    void displayItem() const {
//        cout << itemName << "\t$" << itemPrice << endl;
//    }
//
//    static void loadMenu(menuItemType* menuList) {
//        menuList[0].setItem("Plain Egg", 1.23);
//        menuList[1].setItem("Bacon and Egg", 3.05);
//        menuList[2].setItem("Muffin", 1.00);
//        menuList[3].setItem("French Toast", 2.05);
//        menuList[4].setItem("Fruit Basket", 2.70);
//        menuList[5].setItem("Cereal", 0.50);
//        menuList[6].setItem("Coffee", 1.00);
//        menuList[7].setItem("Tea", 0.60);
//    }
//
//    static void showMenu(const menuItemType* menuList, int count) {
//        cout << "-------------------------------------------------" << endl;
//        for (int i = 0; i < count; i++) {
//            cout << i + 1 << ". " << menuList[i].getName();
//
//            int len = strlen(menuList[i].getName());
//            for (int j = len; j < 20; j++)
//                cout << " ";
//            cout << "$" << menuList[i].getPrice() << endl;
//        }
//        cout << "-------------------------------------------------" << endl;
//    }
//
//    static void takeOrder(menuItemType* menuList, int count, int& totalQuantity, int& totalItemsPurchased) {
//        int numItems;
//        cout << "Enter the number of different items to order: ";
//        cin >> numItems;
//        totalItemsPurchased = numItems;
//        totalQuantity = 0;
//
//        for (int i = 0; i < numItems; i++) {
//            int itemNo;
//            int qty;
//            cout << "Enter item number and quantity: ";
//            cin >> itemNo;
//            cin >> qty;
//            if (itemNo >= 1 && itemNo <= count) {
//                menuList[itemNo - 1].setQuantity(qty);
//                totalQuantity += qty;
//            }
//        }
//    }
//
//    static void printCheck(const menuItemType* menuList, int count) {
//
//        cout << endl;
//
//        cout << "Your Order:" << endl;
//        cout << "--------------------------------------------------" << endl;
//        double subtotal = 0.0;
//
//        for (int i = 0; i < count; i++) {
//            if (menuList[i].getQuantity() > 0) {
//                double cost = menuList[i].calculateCost();
//                subtotal += cost;
//                cout << " " << menuList[i].getQuantity() << " x " << menuList[i].getName();
//
//                int len = strlen(menuList[i].getName());
//                for (int j = len; j < 20; j++)
//                    cout << " ";
//
//                cout << "$" << cost << endl;
//            }
//        }
//
//        cout << "--------------------------------------------------" << endl;
//        double tax = subtotal * 0.05;
//        double total = subtotal + tax;
//        cout << "Tax (5%)                 $" << tax << endl;
//        cout << "Total Amount Due:        $" << total << endl;
//        cout << "--------------------------------------------------" << endl;
//    }
//
//    static void showTotalMenuItemsCreated() {
//        cout << "Total menu items available: " << totalItemsCreated << endl;
//    }
//};
//
//int menuItemType::totalItemsCreated = 0;
//
//int main() {
//    cout << "==========Welcome to Umair's Breakfast Billing System==========" << endl;
//  
//
//    int menuCount = 8;
//    menuItemType* menuList = new menuItemType[menuCount];
//
//    menuItemType::loadMenu(menuList);
//    menuItemType::showMenu(menuList, menuCount);
//
//    int totalQuantity = 0, totalItemsPurchased = 0;
//    menuItemType::takeOrder(menuList, menuCount, totalQuantity, totalItemsPurchased);
//    menuItemType::printCheck(menuList, menuCount);
//    menuItemType::showTotalMenuItemsCreated();
//
//    cout << "Total different items purchased: " << totalItemsPurchased << endl;
//    cout << "Total quantity purchased: " << totalQuantity << endl;
//
//    delete[] menuList;
//    return 0;
//}
