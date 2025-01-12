//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEShareAsStoryStyleComponentModel : NSObject {
    NSArray *_images;
    NSArray *_texts;
    NSArray *_contents;
}

@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSArray *texts;
@property (retain, nonatomic) NSArray *contents;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)modelWithImages:(id)arg0 contentModel:(id)arg1 textModel:(id)arg2;

- (id)initWithImages:(id)arg0 contentModel:(id)arg1 textModel:(id)arg2;
- (id)images;
- (void).cxx_destruct;
- (id)contents;
- (void)setContents:(id)arg0;
- (void)setImages:(id)arg0;
- (id)texts;
- (void)setTexts:(id)arg0;

@end
