//
//     Generated by private class-dump
//

@class AWESearchMerchandisePicUrl, NSString, AWESearchMerchandisePicSize;

@interface AWESearchMerchandisePicConfig : AWEBaseApiModel {
    AWESearchMerchandisePicUrl *_picUrl;
    AWESearchMerchandisePicSize *_size;
    NSString *_url;
}

@property (retain, nonatomic) AWESearchMerchandisePicUrl *picUrl;
@property (retain, nonatomic) AWESearchMerchandisePicSize *size;
@property (copy, nonatomic) NSString *url;

+ (id)JSONKeyPathsByPropertyKey;

- (id)picUrl;
- (void)setPicUrl:(id)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)size;
- (void)setSize:(id)arg0;
- (id)url;

@end
