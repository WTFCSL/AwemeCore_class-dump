//
//     Generated by private class-dump
//

@class NSString, IESECBackgroundDescribeInfo, IESECImageModel;

@interface IESECSeparateLineElement : MTLModel <MTLJSONSerializing> {
    IESECBackgroundDescribeInfo *_background;
    IESECImageModel *_image;
}

@property (retain, nonatomic) IESECBackgroundDescribeInfo *background;
@property (retain, nonatomic) IESECImageModel *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)background;
- (void).cxx_destruct;
- (id)image;
- (void)setBackground:(id)arg0;
- (void)setImage:(id)arg0;

@end