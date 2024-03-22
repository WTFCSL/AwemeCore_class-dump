//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString;

@interface IESLiveAnchorInteractiveGameListModel : IESLiveDynamicModel {
    NSArray *_tabOrderArr;
    NSArray *_secondOrderArr;
}

@property (copy, nonatomic) NSArray *gameList;
@property (copy, nonatomic) NSDictionary *groupPropertyDic;
@property (copy, nonatomic) NSArray *groupOrderArr;
@property (copy, nonatomic) NSArray *tabOrderArr;
@property (copy, nonatomic) NSArray *secondOrderArr;
@property (copy, nonatomic) NSString *dataHash;
@property (nonatomic) BOOL needsUpdate;

- (id)initWithFuncPBData:(id)arg0;
- (id)secondOrderArr;
- (void)setTabOrderArr:(id)arg0;
- (void)setSecondOrderArr:(id)arg0;
- (id)tabOrderArr;
- (void).cxx_destruct;

@end