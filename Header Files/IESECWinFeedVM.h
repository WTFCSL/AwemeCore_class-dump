//
//     Generated by private class-dump
//

@interface IESECWinFeedVM : NSObject

+ (id)objectsForListWithContext:(id)arg0 headerResponse:(id)arg1 tabs:(id)arg2 status:(unsigned long long)arg3;
+ (id)sectionControllerWithObject:(id)arg0 context:(id)arg1;
+ (id)getHeaderObjectWithSectionModel:(id)arg0 headerResponse:(id)arg1 context:(id)arg2;
+ (id)getHeaderObjectWithMixFullItem:(id)arg0 headerResponse:(id)arg1 context:(id)arg2 headerHybrid:(BOOL)arg3 sectionStyle:(id)arg4 splitConfig:(unsigned long long)arg5;
+ (id)getObjectWithItem:(id)arg0 context:(id)arg1 index:(long long)arg2 tab:(id)arg3;
+ (void)lynxCardappendExtraInfo:(id)arg0 index:(long long)arg1 context:(id)arg2;
+ (BOOL)isNewRankIndexStart:(id)arg0;
+ (id)mapperItemKey:(id)arg0 itemType:(long long)arg1;
+ (id)mapperKey:(id)arg0;
+ (id)sectionClassMap;
+ (id)getObjectArrWithTabDataStatus:(unsigned long long)arg0 tab:(id)arg1 context:(id)arg2;

@end