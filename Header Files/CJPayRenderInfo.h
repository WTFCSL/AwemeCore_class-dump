//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayRenderInfo : JSONModel {
    NSString *_type;
    NSString *_h5Url;
    NSString *_lynxUrl;
}

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *h5Url;
@property (copy, nonatomic) NSString *lynxUrl;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)lynxUrl;
- (void)setLynxUrl:(id)arg0;
- (id)h5Url;
- (void)setH5Url:(id)arg0;
- (void).cxx_destruct;
- (id)type;
- (void)setType:(id)arg0;

@end