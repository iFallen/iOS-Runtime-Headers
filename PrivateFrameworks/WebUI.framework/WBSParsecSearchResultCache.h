/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSArray, NSMutableDictionary;

@interface WBSParsecSearchResultCache : NSObject {
    unsigned long long _cachedQueriesLimit;
    unsigned long long _cachedResultsLimit;
    NSMutableDictionary *_resultCache;
    NSMutableDictionary *_resultSetCache;
}

@property(readonly) NSArray * allCachedQueries;
@property(readonly) NSArray * allCachedResultIdentifiers;

- (void).cxx_destruct;
- (id)allCachedQueries;
- (id)allCachedResultIdentifiers;
- (void)cacheResult:(id)arg1;
- (void)cacheResultSet:(id)arg1;
- (id)initWithCachedQueriesLimit:(unsigned long long)arg1 cachedResultsLimit:(unsigned long long)arg2;
- (id)resultForIdentifier:(id)arg1;
- (id)resultSetForQuery:(id)arg1;

@end