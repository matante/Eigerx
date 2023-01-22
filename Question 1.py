def price_check(products, product_prices, product_sold, sold_price):
    """
    Compare the prices of the products sold to the correct prices and return the number of errors.
    :param products: list of products
    :param product_prices: list of correct prices for each product
    :param product_sold: list of products sold
    :param sold_price: list of prices recorded for the sold products
    :return: int, the number of errors in pricing
    """
    product_dict = dict(zip(products, product_prices))
    errors = 0
    for index in range(len(product_sold)):
        if product_dict[product_sold[index]] != sold_price[index]:
            errors += 1
    return errors
