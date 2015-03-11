/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class HDSQLiteQuery, NSArray, NSString;

@interface HDSQLiteContainsPredicate : HDSQLitePropertyPredicate <NSCopying> {
    HDSQLiteQuery *_query;
    NSString *_queryProperty;
    id _values;
    bool_negative;
}

@property(getter=isNegative,readonly) bool negative;
@property(readonly) HDSQLiteQuery * query;
@property(readonly) NSString * queryProperty;
@property(readonly) NSArray * values;

+ (id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3;
+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;
+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isCompatibleWithPredicate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNegative;
- (id)query;
- (id)queryProperty;
- (id)values;

@end