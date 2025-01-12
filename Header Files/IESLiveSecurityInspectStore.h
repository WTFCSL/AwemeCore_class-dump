//
//     Generated by private class-dump
//

@class NSArray, NSString, HTSEventContext, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveSecurityInspectStore : NSObject <HTSLiveMessageSubscriber> {
    BOOL _showSecurityInspect;
    NSArray *_urlList;
    NSString *_titleString;
    NSString *_subTitleString;
    long long _foldDuration;
    long long _displayDutation;
    id<IESLiveRoomService> _room;
    HTSEventContext *_trackContext;
    IESLiveComponentContext *_componentContext;
}

@property (retain, nonatomic) NSArray *urlList;
@property (retain, nonatomic) NSString *titleString;
@property (retain, nonatomic) NSString *subTitleString;
@property (nonatomic) long long foldDuration;
@property (nonatomic) long long displayDutation;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (nonatomic) BOOL showSecurityInspect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (id)urlList;
- (void)setUrlList:(id)arg0;
- (id)initWithRoom:(id)arg0 trackContext:(id)arg1 componentContext:(id)arg2;
- (long long)displayDutation;
- (long long)foldDuration;
- (void)setFoldDuration:(long long)arg0;
- (void)setDisplayDutation:(long long)arg0;
- (void)setShowSecurityInspect:(BOOL)arg0;
- (BOOL)showSecurityInspect;
- (void).cxx_destruct;
- (void)handleMessage:(id)arg0;
- (id)titleString;
- (void)setTitleString:(id)arg0;
- (id)subTitleString;
- (void)setSubTitleString:(id)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)messageReceived:(id)arg0;
- (void)prepareForUse;

@end
