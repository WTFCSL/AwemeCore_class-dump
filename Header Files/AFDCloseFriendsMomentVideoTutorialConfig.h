//
//     Generated by private class-dump
//

@class NSString, AWEUserModel, AFDCloseFriendsMomentVideoTutorialButtonConfig;

@interface AFDCloseFriendsMomentVideoTutorialConfig : MTLModel <MTLJSONSerializing> {
    NSString *_videoURL;
    NSString *_videoCoverImageURL;
    unsigned long long _videoPosition;
    AWEUserModel *_author;
    AFDCloseFriendsMomentVideoTutorialButtonConfig *_buttonConfig;
}

@property (copy, nonatomic) NSString *videoURL;
@property (copy, nonatomic) NSString *videoCoverImageURL;
@property (nonatomic) unsigned long long videoPosition;
@property (retain, nonatomic) AWEUserModel *author;
@property (retain, nonatomic) AFDCloseFriendsMomentVideoTutorialButtonConfig *buttonConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authorJSONTransformer;
+ (id)buttonConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)buttonConfig;
- (void)setButtonConfig:(id)arg0;
- (unsigned long long)videoPosition;
- (id)videoCoverImageURL;
- (void)setVideoCoverImageURL:(id)arg0;
- (void)setVideoPosition:(unsigned long long)arg0;
- (id)videoURL;
- (void).cxx_destruct;
- (id)author;
- (void)setAuthor:(id)arg0;
- (void)setVideoURL:(id)arg0;

@end