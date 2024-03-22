//
//     Generated by private class-dump
//

@class UIImage, NSString;
@protocol IESLiveRoomService, IESLiveCommonCastScreenViewHandlerDelegate, IESLiveCommonCastScreenBusiness;

@interface IESLiveCommonCastScreenViewBaseStrategy : NSObject <IESLiveCommonCastScreenViewStrategy> {
    id<IESLiveCommonCastScreenViewHandlerDelegate> _delegate;
    id<IESLiveCommonCastScreenBusiness> _business;
    UIImage *_businessIcon;
    id<IESLiveRoomService> _room;
}

@property (retain, nonatomic) id<IESLiveCommonCastScreenBusiness> business;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) UIImage *businessIcon;
@property (weak, nonatomic) id<IESLiveCommonCastScreenViewHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resumeScreenCast;
- (void)castScreenChangedWithStatus:(long long)arg0;
- (void)setupCastBusinessIcon:(id)arg0;
- (void)startCastWithCompletion:(id /* block */)arg0;
- (void)stopCastWithCompletion:(id /* block */)arg0;
- (id)businessIcon;
- (void)setBusinessIcon:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)business;
- (void)setBusiness:(id)arg0;
- (id)initWithBusiness:(id)arg0;
- (id)room;
- (void)setRoom:(id)arg0;

@end