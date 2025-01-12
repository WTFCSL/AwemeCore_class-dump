//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEAwemeModel;
@protocol AFDPureModePageCommerceDelegate, AFDSpeedManagerProtocol, AFDPureModePageGoodsDelegate;

@interface AFDPureModeConfiguration : NSObject {
    unsigned long long _fromScene;
    unsigned long long _enterPinchMethod;
    NSString *_fromPage;
    double _playerViewHeight;
    NSString *_adEventName;
    NSDictionary *_logExtraDict;
    NSString *_referString;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSString *_cityInfoString;
    AWEAwemeModel *_model;
    AWEAwemeModel *_fromModel;
    AWEAwemeModel *_currentModel;
    AWEAwemeModel *_enterModel;
    NSString *_commercePriorityType;
    unsigned long long _slideMode;
    id<AFDPureModePageCommerceDelegate> _commerceDelegate;
    id<AFDPureModePageGoodsDelegate> _goodsDelegate;
    id<AFDSpeedManagerProtocol> _speedManager;
    id /* block */ _getCurrentModelBlock;
    id /* block */ _getCurrentIndexBlock;
}

@property (nonatomic) unsigned long long fromScene;
@property (nonatomic) unsigned long long enterPinchMethod;
@property (copy, nonatomic) NSString *fromPage;
@property (nonatomic) double playerViewHeight;
@property (copy, nonatomic) NSString *adEventName;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *cityInfoString;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEAwemeModel *fromModel;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) AWEAwemeModel *enterModel;
@property (copy, nonatomic) NSString *commercePriorityType;
@property (nonatomic) unsigned long long slideMode;
@property (weak, nonatomic) id<AFDPureModePageCommerceDelegate> commerceDelegate;
@property (weak, nonatomic) id<AFDPureModePageGoodsDelegate> goodsDelegate;
@property (weak, nonatomic) id<AFDSpeedManagerProtocol> speedManager;
@property (copy, nonatomic) id /* block */ getCurrentModelBlock;
@property (copy, nonatomic) id /* block */ getCurrentIndexBlock;

- (id)cityInfoString;
- (void)setCityInfoString:(id)arg0;
- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)enterFrom;
- (id)adEventName;
- (void)setAdEventName:(id)arg0;
- (id)fromModel;
- (void)setFromModel:(id)arg0;
- (id)speedManager;
- (void)setSpeedManager:(id)arg0;
- (void)setFromPage:(id)arg0;
- (unsigned long long)fromScene;
- (double)playerViewHeight;
- (id)commercePriorityType;
- (void)setPlayerViewHeight:(double)arg0;
- (void)setFromScene:(unsigned long long)arg0;
- (void)setSlideMode:(unsigned long long)arg0;
- (void)setEnterModel:(id)arg0;
- (id)enterModel;
- (void)setGetCurrentModelBlock:(id /* block */)arg0;
- (id /* block */)getCurrentModelBlock;
- (id /* block */)getCurrentIndexBlock;
- (void)setCommercePriorityType:(id)arg0;
- (id)goodsDelegate;
- (id)commerceDelegate;
- (unsigned long long)slideMode;
- (void)setGetCurrentIndexBlock:(id /* block */)arg0;
- (unsigned long long)enterPinchMethod;
- (void)setEnterPinchMethod:(unsigned long long)arg0;
- (void)setCommerceDelegate:(id)arg0;
- (void)setGoodsDelegate:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;
- (id)fromPage;

@end
