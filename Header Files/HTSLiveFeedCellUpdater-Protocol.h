//
//     Generated by private class-dump
//

@protocol HTSLiveFeedCellDelegate, HTSLiveFeedItem;

@protocol HTSLiveFeedCellUpdater <NSObject>

@property (retain, nonatomic) id<HTSLiveFeedItem> item;
@property (nonatomic) BOOL isFeedDrawerMode;
@property (weak, nonatomic) id<HTSLiveFeedCellDelegate> delegate;

- (BOOL)isFeedDrawerMode;
- (void)update:(id)arg0 isFeedDrawer:(BOOL)arg1;
- (void)setIsFeedDrawerMode:(BOOL)arg0;
- (id)item;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setItem:(id)arg0;

@optional

- (void)applyPreview:(id)arg0;
- (void)update:(id)arg0 dislike:(id)arg1 indexPath:(id)arg2;

@end
