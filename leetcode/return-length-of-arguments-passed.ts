type JSONValue = null | boolean | number | string | JSONValue[] | { [key: string]: JSONValue };

function argumentsLength(...args: JSONValue[]): number {
    return Object.keys(args).length;
};

/**
 * argumentsLength(1, 2, 3); // 3
 */
