//
//     Generated by private class-dump
//

@class NSString;

@interface AppMonitorTable : NSObject {
    NSString *_scheme;
    NSString *_tableName;
}

@property (retain, nonatomic) NSString *scheme;
@property (retain, nonatomic) NSString *tableName;

+ (BOOL)validParamsWithModule:(id)arg0 monitorPoint:(id)arg1;
+ (BOOL)validParamsWithColumns:(id)arg0 rows:(id)arg1;
+ (BOOL)isRegisteredWithModule:(id)arg0 monitorPoint:(id)arg1;
+ (BOOL)validateDiemension:(id)arg0 forModule:(id)arg1 monitorPoint:(id)arg2;
+ (BOOL)validateMeasure:(id)arg0 forModule:(id)arg1 monitorPoint:(id)arg2;
+ (id)formatNumber:(id)arg0;
+ (void)registerWithModule:(id)arg0 monitorPoint:(id)arg1 columns:(id)arg2 rows:(id)arg3 aggregate:(BOOL)arg4;
+ (void)addConstraintWithModule:(id)arg0 monitorPoint:(id)arg1 name:(id)arg2 min:(double)arg3 max:(double)arg4 defaultValue:(double)arg5;
+ (BOOL)commitWithModule:(id)arg0 monitorPoint:(id)arg1 columns:(id)arg2 rows:(id)arg3;
+ (id)monitorForScheme:(id)arg0 tableName:(id)arg1;

- (BOOL)isDimensionKey:(id)arg0;
- (BOOL)isMeasureKey:(id)arg0;
- (void)registerTableWithRows:(id)arg0 columns:(id)arg1 aggregate:(BOOL)arg2;
- (void)addConstraintWithName:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 defaultValue:(id)arg2;
- (void)addConstraintWithName:(id)arg0 min:(double)arg1 max:(double)arg2 defaultValue:(double)arg3;
- (BOOL)updateTableForColumns:(id)arg0 rows:(id)arg1;
- (BOOL)updateTableWithDictionary:(id)arg0;
- (id)tableName;
- (void)setScheme:(id)arg0;
- (void).cxx_destruct;
- (id)scheme;
- (void)setTableName:(id)arg0;

@end
