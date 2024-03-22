//
//     Generated by private class-dump
//

@class UIColor, NSString, NSArray, NSURL, UIImage, NSNumber, NSIndexPath;
@protocol DVEResourceModelProtocol;

@interface DVEEffectValue : NSObject <NSCopying, NSMutableCopying, DVEResourceModelProtocol> {
    BOOL overlap;
    NSString *identifier;
    NSNumber *intensity;
    UIImage *assetImage;
    NSURL *imageURL;
    NSString *name;
    NSString *sourcePath;
    unsigned long long resourceTag;
    NSArray *color;
    UIImage *highlightImage;
    unsigned long long _valueType;
    unsigned long long _beautyType;
    unsigned long long _makeSubUp;
    unsigned long long _valueState;
    long long _subSelectIndex;
    NSString *_composerTag;
    NSString *_composerPath;
    NSString *_key;
    NSNumber *_animationType;
    NSIndexPath *_indexPath;
    UIColor *_borderColor;
    id<DVEResourceModelProtocol> _injectModel;
}

@property (nonatomic) unsigned long long valueType;
@property (nonatomic) unsigned long long beautyType;
@property (nonatomic) unsigned long long makeSubUp;
@property (nonatomic) unsigned long long valueState;
@property (nonatomic) long long subSelectIndex;
@property (retain, nonatomic) NSString *composerTag;
@property (retain, nonatomic) NSString *composerPath;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSNumber *animationType;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) id<DVEResourceModelProtocol> injectModel;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *sourcePath;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) UIImage *assetImage;
@property (nonatomic) unsigned long long resourceTag;
@property (nonatomic) BOOL overlap;
@property (retain, nonatomic) NSNumber *intensity;
@property (retain, nonatomic) UIImage *highlightImage;
@property (copy, nonatomic) NSArray *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadModelWithCompletion:(id /* block */)arg0 progress:(id /* block */)arg1;
- (void)updateFromModel:(id)arg0;
- (void)setInjectModel:(id)arg0;
- (unsigned long long)beautyType;
- (void)setBeautyType:(unsigned long long)arg0;
- (unsigned long long)resourceTag;
- (void)setResourceTag:(unsigned long long)arg0;
- (void)setHighlightImage:(id)arg0;
- (id)injectModel;
- (void)downloadModel:(id /* block */)arg0;
- (void)initWithDownloadedModel:(id)arg0;
- (void)downloadModel:(id /* block */)arg0 progress:(id /* block */)arg1;
- (id)initWithType:(unsigned long long)arg0 Bundle:(id)arg1 name:(id)arg2 imageURL:(id)arg3 assetImage:(id)arg4 key:(id)arg5 indensity:(float)arg6;
- (id)initWithType:(unsigned long long)arg0 Bundle:(id)arg1 name:(id)arg2 image:(id)arg3 key:(id)arg4 indensity:(float)arg5;
- (id)initWithInjectModel:(id)arg0;
- (id)composerTag;
- (id)composerPath;
- (unsigned long long)makeSubUp;
- (void)setMakeSubUp:(unsigned long long)arg0;
- (unsigned long long)valueState;
- (void)setValueState:(unsigned long long)arg0;
- (long long)subSelectIndex;
- (void)setSubSelectIndex:(long long)arg0;
- (void)setComposerTag:(id)arg0;
- (void)setComposerPath:(id)arg0;
- (id)sourcePath;
- (id)key;
- (id)color;
- (void).cxx_destruct;
- (unsigned long long)valueType;
- (id)borderColor;
- (unsigned long long)status;
- (void)setBorderColor:(id)arg0;
- (void)setIndexPath:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setImageURL:(id)arg0;
- (void)setSourcePath:(id)arg0;
- (void)setAnimationType:(id)arg0;
- (void)setValueType:(unsigned long long)arg0;
- (id)identifier;
- (id)imageURL;
- (id)indexPath;
- (id)intensity;
- (void)setKey:(id)arg0;
- (void)setName:(id)arg0;
- (id)animationType;
- (id)name;
- (void)setIdentifier:(id)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;
- (void)setColor:(id)arg0;
- (void)setIntensity:(id)arg0;
- (id)highlightImage;
- (BOOL)overlap;
- (void)setOverlap:(BOOL)arg0;
- (void)setAssetImage:(id)arg0;
- (id)assetImage;

@end
