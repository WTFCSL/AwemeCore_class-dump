//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@interface AWEFollowUserRecentUpdateItem : MTLModel <MTLJSONSerializing> {
    BOOL _unwatched;
    AWEAwemeModel *_videoModel;
}

@property (retain, nonatomic) AWEAwemeModel *videoModel;
@property (nonatomic) BOOL unwatched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)videoModel;
- (void)setVideoModel:(id)arg0;
- (BOOL)unwatched;
- (void)setUnwatched:(BOOL)arg0;
- (void).cxx_destruct;

@end
