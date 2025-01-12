//
//     Generated by private class-dump
//

@class NSDictionary, IESECListKitListModel;

@interface IESECMallShopMomentResponse : IESECBaseApiModel {
    BOOL _hasMore;
    IESECListKitListModel *_hybridList;
    NSDictionary *_logExtra;
    unsigned long long _cursor;
    NSDictionary *_passThroughParams;
    NSDictionary *_bizConfig;
}

@property (retain, nonatomic) IESECListKitListModel *hybridList;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long cursor;
@property (copy, nonatomic) NSDictionary *passThroughParams;
@property (copy, nonatomic) NSDictionary *bizConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (id)bizConfig;
- (void)setBizConfig:(id)arg0;
- (void)setPassThroughParams:(id)arg0;
- (id)passThroughParams;
- (id)hybridList;
- (void)setHybridList:(id)arg0;
- (unsigned long long)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(unsigned long long)arg0;

@end
