//
//     Generated by private class-dump
//

@class NSArray;

@protocol AWECommentShareSectionViewModelProtocol <NSObject>

@property (nonatomic, readonly) NSArray *cellModels;
@property (nonatomic) BOOL noFriends;
@property (nonatomic, copy) id /* block */ shareItemViewBlock;

- (id /* block */)shareItemViewBlock;
- (id)cellModels;
- (BOOL)noFriends;
- (void)setNoFriends:(BOOL)arg0;
- (void)setShareItemViewBlock:(id /* block */)arg0;

@end
