//
//     Generated by private class-dump
//

@class NSString;
@protocol AWETextInputControllerProtocol, AWECommentSearchMusicViewControllerDelegate;

@protocol AWECommentSearchMusicViewControllerProtocol <NSObject>

@property (weak, nonatomic) id<AWECommentSearchMusicViewControllerDelegate> delegate;
@property (weak, nonatomic) id<AWETextInputControllerProtocol> textInputController;
@property (nonatomic) BOOL isRemotePlay;
@property (copy, nonatomic) NSString *referString;

- (id)referString;
- (void)setReferString:(id)arg0;
- (BOOL)isRemotePlay;
- (void)setIsRemotePlay:(BOOL)arg0;
- (double)panelHeight;
- (void)setTextInputController:(id)arg0;
- (id)delegate;
- (id)textInputController;
- (void)setDelegate:(id)arg0;
- (void)reset;

@end
