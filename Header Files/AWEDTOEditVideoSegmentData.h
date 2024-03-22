//
//     Generated by private class-dump
//

@class NSString, AWEDTOVideoCutInfo;

@interface AWEDTOEditVideoSegmentData : MTLModel <MTLJSONSerializing> {
    NSString *_videoPath;
    AWEDTOVideoCutInfo *_videoCutInfo;
}

@property (copy, nonatomic) NSString *videoPath;
@property (retain, nonatomic) AWEDTOVideoCutInfo *videoCutInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoCutInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)videoCutInfo;
- (void)setVideoCutInfo:(id)arg0;
- (void).cxx_destruct;
- (id)videoPath;
- (void)setVideoPath:(id)arg0;

@end
