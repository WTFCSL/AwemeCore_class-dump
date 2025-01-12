//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEQuickFlashStickerUriModel : MTLModel <MTLJSONSerializing> {
    NSString *_userUri;
    NSArray *_URLList;
    long long _width;
    long long _height;
}

@property (copy, nonatomic) NSString *userUri;
@property (copy, nonatomic) NSArray *URLList;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)URLList;
- (void)setURLList:(id)arg0;
- (id)userUri;
- (void)setUserUri:(id)arg0;
- (void).cxx_destruct;
- (long long)height;
- (void)setWidth:(long long)arg0;
- (void)setHeight:(long long)arg0;
- (long long)width;

@end
