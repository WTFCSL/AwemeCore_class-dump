//
//     Generated by private class-dump
//

@class IESLivePinCommentNode;
@protocol IESLivePinCommentCellDelegate;

@protocol IESLivePinCommentCellProtocol <NSObject>

@property (retain, nonatomic) IESLivePinCommentNode *node;
@property (weak, nonatomic) id<IESLivePinCommentCellDelegate> delegate;

- (void)configWithNode:(id)arg0 containerWidth:(double)arg1;
- (id)node;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setNode:(id)arg0;

@end
