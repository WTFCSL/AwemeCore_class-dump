//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEAwemeModel, NSDate;

@interface AFDPermissionUserAction : NSObject <AFDUserActionProtocol> {
    long long _level;
    NSDictionary *_info;
    NSDate *_createDate;
    AWEAwemeModel *_awemeModel;
}

@property (nonatomic) long long level;
@property (copy, nonatomic) NSDictionary *info;
@property (retain, nonatomic) NSDate *createDate;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (void)setCreateDate:(id)arg0;
- (BOOL)isEndAction;
- (BOOL)isRootAction;
- (void)trackDataConsistencyFailedWithActions:(id)arg0 resultType:(unsigned long long)arg1;
- (id)rootActionLevels;
- (id)endActionLevels;
- (void)checkWithActions:(id)arg0;
- (void)setLevel:(long long)arg0;
- (id)info;
- (long long)level;
- (void).cxx_destruct;
- (void)setInfo:(id)arg0;
- (id)createDate;

@end
