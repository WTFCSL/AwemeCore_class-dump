//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEDTOSavePhotoPropData : MTLModel <MTLJSONSerializing> {
    BOOL _shouldRemoveLabel;
    NSArray *_savePhotos;
    NSString *_toastText;
    NSString *_waterMarkPath;
}

@property (copy, nonatomic) NSArray *savePhotos;
@property (copy, nonatomic) NSString *toastText;
@property (copy, nonatomic) NSString *waterMarkPath;
@property (nonatomic) BOOL shouldRemoveLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)toastText;
- (void)setToastText:(id)arg0;
- (id)savePhotos;
- (void)setSavePhotos:(id)arg0;
- (id)waterMarkPath;
- (void)setWaterMarkPath:(id)arg0;
- (BOOL)shouldRemoveLabel;
- (void)setShouldRemoveLabel:(BOOL)arg0;
- (void).cxx_destruct;

@end