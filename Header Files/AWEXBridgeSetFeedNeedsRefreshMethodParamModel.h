//
//     Generated by private class-dump
//

@class NSString;

@interface AWEXBridgeSetFeedNeedsRefreshMethodParamModel : BDXBridgeModel {
    BOOL _shouldRefresh;
    NSString *_caller;
    NSString *_refreshToastMsg;
}

@property (copy, nonatomic) NSString *caller;
@property (nonatomic) BOOL shouldRefresh;
@property (copy, nonatomic) NSString *refreshToastMsg;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setRefreshToastMsg:(id)arg0;
- (id)refreshToastMsg;
- (BOOL)shouldRefresh;
- (void)setShouldRefresh:(BOOL)arg0;
- (id)caller;
- (void).cxx_destruct;
- (void)setCaller:(id)arg0;

@end