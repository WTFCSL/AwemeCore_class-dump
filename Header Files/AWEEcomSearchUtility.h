//
//     Generated by private class-dump
//

@interface AWEEcomSearchUtility : AWESearchBaseUtility

+ (id)frequrntHistoryKey;
+ (id)fetchHistoryWordsWithIncludeTypeList:(id)arg0 excludeTypeList:(id)arg1 maxNumber:(id)arg2 responseHistoryType:(long long)arg3 historyKey:(id)arg4;
+ (void)deleteSearchWord:(id)arg0 historyKey:(id)arg1;
+ (void)deleteAllSearchWordsHistoryKey:(id)arg0;
+ (void)discardOldUserHistoryIfNeeded;
+ (void)p_discardOldUserHistoryIfNeeded;
+ (id)searchHistoryKey;
+ (void)p_clearHistoryStorageForKey:(id)arg0;
+ (id)searchHistoryWordDict;
+ (void)saveFrequentHistoryWordsIfNeeded:(id)arg0;
+ (id)fetchHistoryWordsWithIncludeTypeList:(id)arg0 excludeTypeList:(id)arg1 maxNumber:(id)arg2 responseHistoryType:(long long)arg3;
+ (void)deleteSearchWord:(id)arg0;
+ (void)deleteAllSearchWords;

@end
