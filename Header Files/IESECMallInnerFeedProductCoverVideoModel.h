//
//     Generated by private class-dump
//

@class NSString, NSArray, NSNumber;

@interface IESECMallInnerFeedProductCoverVideoModel : MTLModel <MTLJSONSerializing> {
    NSString *_vid;
    NSArray *_src;
    NSNumber *_width;
    NSNumber *_height;
}

@property (copy, nonatomic) NSString *vid;
@property (retain, nonatomic) NSArray *src;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)vid;
- (void)setVid:(id)arg0;
- (void).cxx_destruct;
- (id)height;
- (void)setWidth:(id)arg0;
- (void)setHeight:(id)arg0;
- (id)width;
- (id)src;
- (void)setSrc:(id)arg0;

@end