//
//     Generated by private class-dump
//

@class NSString, NSDictionary, IESECOrderHTTPRequest, IESECMallChannelEnterModel;
@protocol IESECMallChannelConfigProtocol;

@interface IESECOrderListMultiTabModel : NSObject {
    NSString *_openTime;
    NSString *_realOpenTime;
    id<IESECMallChannelConfigProtocol> _config;
    IESECOrderHTTPRequest *_firstScreenRequest;
    NSDictionary *_skinInfo;
    NSString *_theme;
    IESECMallChannelEnterModel *_enterModel;
}

@property (copy, nonatomic) NSString *openTime;
@property (copy, nonatomic) NSString *realOpenTime;
@property (weak, nonatomic) id<IESECMallChannelConfigProtocol> config;
@property (retain, nonatomic) IESECOrderHTTPRequest *firstScreenRequest;
@property (retain, nonatomic) NSDictionary *skinInfo;
@property (copy, nonatomic) NSString *theme;
@property (retain, nonatomic) IESECMallChannelEnterModel *enterModel;

- (void)setEnterModel:(id)arg0;
- (id)enterModel;
- (id)openTime;
- (void)setOpenTime:(id)arg0;
- (id)realOpenTime;
- (void)setRealOpenTime:(id)arg0;
- (id)skinInfo;
- (void)setSkinInfo:(id)arg0;
- (id)firstScreenRequest;
- (void)setFirstScreenRequest:(id)arg0;
- (void)setConfig:(id)arg0;
- (void)setTheme:(id)arg0;
- (void).cxx_destruct;
- (id)theme;
- (id)config;

@end
