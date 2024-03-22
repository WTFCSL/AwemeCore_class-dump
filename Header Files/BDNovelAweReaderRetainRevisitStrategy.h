//
//     Generated by private class-dump
//

@class NSString;

@interface BDNovelAweReaderRetainRevisitStrategy : NSObject {
    BOOL _enable;
    NSString *_popupKey;
    NSString *_headerText;
    NSString *_subHeaderText;
    NSString *_imageUrl;
    NSString *_toastRefuse;
    NSString *_toastAccept;
    NSString *_schema;
}

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *popupKey;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSString *subHeaderText;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *toastRefuse;
@property (copy, nonatomic) NSString *toastAccept;
@property (copy, nonatomic) NSString *schema;

- (id)popupKey;
- (void)setPopupKey:(id)arg0;
- (id)toastRefuse;
- (void)setToastRefuse:(id)arg0;
- (id)toastAccept;
- (void)setToastAccept:(id)arg0;
- (void)setSchema:(id)arg0;
- (BOOL)enable;
- (id)headerText;
- (void).cxx_destruct;
- (void)setEnable:(BOOL)arg0;
- (id)schema;
- (void)setHeaderText:(id)arg0;
- (id)imageUrl;
- (void)setImageUrl:(id)arg0;
- (id)subHeaderText;
- (void)setSubHeaderText:(id)arg0;

@end