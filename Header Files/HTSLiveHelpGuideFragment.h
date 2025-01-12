//
//     Generated by private class-dump
//

@class NSString, NSNumber;
@protocol IESLiveInternalRouter;

@interface HTSLiveHelpGuideFragment : IESLiveRoomComponent {
    NSString *_webPageURL;
    id<IESLiveInternalRouter> _internalRouter;
    NSNumber *_roomID;
}

@property (retain, nonatomic) NSString *webPageURL;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) NSNumber *roomID;

- (id)internalRouter;
- (void)setInternalRouter:(id)arg0;
- (void)componentCreate;
- (void)componentMount;
- (void)openHelpWebPage;
- (void).cxx_destruct;
- (id)webPageURL;
- (void)setWebPageURL:(id)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;

@end
