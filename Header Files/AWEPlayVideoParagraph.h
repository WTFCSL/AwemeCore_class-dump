//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEPlayVideoParagraph : MTLModel <MTLJSONSerializing> {
    NSArray *_videoSentences;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

@property (retain, nonatomic) NSArray *videoSentences;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoSentencesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)videoSentences;
- (void)setVideoSentences:(id)arg0;
- (void).cxx_destruct;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;

@end
