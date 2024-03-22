//
//     Generated by private class-dump
//

@class NSString, AWEMixVideoModel, AWEAwemeModel, AWEPlayletInfoModel;
@protocol AWEPaymentEventHandlerDelegate;

@interface AWEPaymentDetailPageEventHandler : NSObject <AWEPaymentEventHandlerProtocol, AWEPaymentDetailEventHandlerProtocol> {
    BOOL _receiveAllEvent;
    id<AWEPaymentEventHandlerDelegate> _delegate;
    AWEAwemeModel *_model;
    NSString *_referString;
    AWEPlayletInfoModel *_playletModel;
    AWEMixVideoModel *_mixModel;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) AWEPlayletInfoModel *playletModel;
@property (retain, nonatomic) AWEMixVideoModel *mixModel;
@property (weak, nonatomic) id<AWEPaymentEventHandlerDelegate> delegate;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL receiveAllEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setReferString:(id)arg0;
- (id)playletModel;
- (void)setPlayletModel:(id)arg0;
- (void)setReceiveAllEvent:(BOOL)arg0;
- (void)handlePayEvent:(id)arg0;
- (void)handleLoginEvent:(id)arg0;
- (id)mixModel;
- (void)setMixModel:(id)arg0;
- (BOOL)shouldRespondsToEvent:(unsigned long long)arg0 responseModel:(id)arg1;
- (void)handleEvent:(unsigned long long)arg0 responseModel:(id)arg1;
- (BOOL)receiveAllEvent;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)initWithIdentifier:(id)arg0;
- (id)identifier;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setIdentifier:(id)arg0;
- (id)handlerIdentifier;

@end
