//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSDictionary, UIResponder, NSArray;

@interface IESECBTMContextV2 : NSObject {
    NSString *_btmInfo;
    NSDictionary *_bcmDescription;
    UIResponder *_host;
    NSArray *_targetPages;
    NSMutableDictionary *_bcmUnitParamsPrivate;
}

@property (retain, nonatomic) NSMutableDictionary *bcmUnitParamsPrivate;
@property (copy, nonatomic) NSString *btmInfo;
@property (copy, nonatomic) NSDictionary *bcmDescription;
@property (weak, nonatomic) UIResponder *host;
@property (copy, nonatomic) NSArray *targetPages;
@property (readonly, copy, nonatomic) NSDictionary *bcmUnitParams;

+ (id)contextWithBtmInfo:(id)arg0 host:(id)arg1 bcmDescription:(id)arg2;

- (id)targetPages;
- (void)setBtmInfo:(id)arg0;
- (id)btmInfo;
- (void)setTargetPages:(id)arg0;
- (id)bcmDescription;
- (void)setBcmDescription:(id)arg0;
- (void)appendBcmUnitParamsBiz:(id)arg0 params:(id)arg1;
- (id)bcmUnitParamsPrivate;
- (void)setBtmInfoWithCode:(id)arg0 index:(id)arg1;
- (void)appendAllBcmUnitParams:(id)arg0;
- (void)appendPageShowUnitParams:(id)arg0;
- (void)appendEcomEntranceUnitParams:(id)arg0;
- (id)bcmUnitParams;
- (void)willJumpToNextPage;
- (id)obtainEventBtmParamsWithEventName:(id)arg0;
- (void)setBcmUnitParamsPrivate:(id)arg0;
- (id)init;
- (void)setHost:(id)arg0;
- (void).cxx_destruct;
- (id)host;

@end
