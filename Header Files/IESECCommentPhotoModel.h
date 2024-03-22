//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface IESECCommentPhotoModel : MTLModel <MTLJSONSerializing> {
    NSString *_url;
    NSString *_thumbnail;
    NSNumber *_width;
    NSNumber *_height;
}

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *thumbnail;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setThumbnail:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)height;
- (id)thumbnail;
- (void)setUrl:(id)arg0;
- (void)setWidth:(id)arg0;
- (void)setHeight:(id)arg0;
- (id)width;
- (id)url;

@end