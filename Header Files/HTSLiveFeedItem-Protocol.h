//
//     Generated by private class-dump
//

@class NSString;

@protocol HTSLiveFeedItem <NSObject>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (Class)cellClass;

@optional

- (void)willDisplay:(id)arg0;
- (struct CGSize { double x0; double x1; })itemSizeInCollectionView:(id)arg0;
- (void)didSelect:(id)arg0;
- (struct CGSize { double x0; double x1; })itemSizeInCollectionView:(id)arg0 indexPath:(id)arg1;

@end
