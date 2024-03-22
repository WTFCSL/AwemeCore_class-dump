//
//     Generated by private class-dump
//

@class NSString, NSArray;

@protocol AWEStudioImageAlbumImageModelProtocol <NSObject>

@property (nonatomic) long long height;
@property (nonatomic) long long width;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSArray *urlList;
@property (copy, nonatomic) NSArray *downloadURLList;

- (id)urlList;
- (void)setUrlList:(id)arg0;
- (id)downloadURLList;
- (void)setDownloadURLList:(id)arg0;
- (long long)height;
- (void)setWidth:(long long)arg0;
- (void)setUri:(id)arg0;
- (void)setHeight:(long long)arg0;
- (long long)width;
- (id)uri;

@end