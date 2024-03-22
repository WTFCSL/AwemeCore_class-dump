//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveOpenChargeViewService;

@interface IESLiveChargePanelSchemaParser : NSObject <IESLiveSchemaParser> {
    id<IESLiveOpenChargeViewService> _openChargeViewService;
}

@property (retain, nonatomic) id<IESLiveOpenChargeViewService> openChargeViewService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)arg0 fromInside:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)openChargeViewService;
- (void)setOpenChargeViewService:(id)arg0;
- (void).cxx_destruct;

@end
