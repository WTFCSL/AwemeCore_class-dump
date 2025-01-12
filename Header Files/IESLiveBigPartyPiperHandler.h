//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveBigPartyAudienceAction, IESLiveBigPartyAnchorAction;

@interface IESLiveBigPartyPiperHandler : NSObject <IESLivePiperHandlerProtocol> {
    id<IESLiveBigPartyAnchorAction> _bigPartyActionCreator;
    id<IESLiveBigPartyAudienceAction> _adminAction;
}

@property (retain, nonatomic) id<IESLiveBigPartyAnchorAction> bigPartyActionCreator;
@property (retain, nonatomic) id<IESLiveBigPartyAudienceAction> adminAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)arg0;
- (id)bigPartyActionCreator;
- (id)adminAction;
- (void)setBigPartyActionCreator:(id)arg0;
- (void)setAdminAction:(id)arg0;
- (void).cxx_destruct;

@end
