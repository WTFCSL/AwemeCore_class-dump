//
//     Generated by private class-dump
//

@class NSString, AWEURLModel, AWEAwemeModel;

@interface AWEECGiftModel : MTLModel <MTLJSONSerializing> {
    BOOL _isSelected;
    NSString *_schema;
    NSString *_horizontalCardName;
    AWEAwemeModel *_awemeData;
    AWEURLModel *_backgroundImage;
}

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *horizontalCardName;
@property (copy, nonatomic) AWEAwemeModel *awemeData;
@property (retain, nonatomic) AWEURLModel *backgroundImage;
@property (nonatomic) BOOL isSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setAwemeData:(id)arg0;
- (id)awemeData;
- (id)horizontalCardName;
- (void)setHorizontalCardName:(id)arg0;
- (void)setSchema:(id)arg0;
- (id)backgroundImage;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setBackgroundImage:(id)arg0;
- (id)schema;
- (BOOL)isSelected;

@end