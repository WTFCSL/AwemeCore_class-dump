//
//     Generated by private class-dump
//

@protocol AWECommentPushSearchAnchorView <AWECrotocol>

@property (nonatomic) BOOL isBgWhite;
@property (nonatomic) double maxWidth;
@property (nonatomic, copy) id /* block */ itemClickBlock;
@property (nonatomic, copy) id /* block */ itemsDisplayBlock;

- (void)setItemClickBlock:(id /* block */)arg0;
- (void)setItemsDisplayBlock:(id /* block */)arg0;
- (void)setIsBgWhite:(BOOL)arg0;
- (void)updateUITheme:(BOOL)arg0;
- (void)trackPushSearchAnchorShowIfNeeded;
- (BOOL)isBgWhite;
- (id /* block */)itemClickBlock;
- (id /* block */)itemsDisplayBlock;
- (id)init;
- (void)setMaxWidth:(double)arg0;
- (double)maxWidth;
- (void)updateWithModel:(id)arg0;
- (void)updateWithModel:(id)arg0;

@end
