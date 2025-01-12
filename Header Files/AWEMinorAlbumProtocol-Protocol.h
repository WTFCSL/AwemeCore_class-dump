//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;
@protocol AWEMinorAlbumStatusProtocol;

@protocol AWEMinorAlbumProtocol <NSObject>

@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *coverUrl;
@property (retain, nonatomic) id<AWEMinorAlbumStatusProtocol> status;
@property (nonatomic) long long source;

- (void)setCoverUrl:(id)arg0;
- (id)coverUrl;
- (void)setAlbumID:(id)arg0;
- (long long)source;
- (id)status;
- (id)title;
- (void)setStatus:(id)arg0;
- (void)setSource:(long long)arg0;
- (void)setTitle:(id)arg0;
- (id)albumID;

@end
