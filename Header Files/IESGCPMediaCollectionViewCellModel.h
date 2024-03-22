//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESGCPMediaCollectionViewCellModel : NSObject {
    BOOL _isLandscape;
    BOOL _isAnchor;
    NSArray *_imageModelArray;
    NSString *_gameID;
    NSString *_name;
}

@property (retain, nonatomic) NSArray *imageModelArray;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *name;

- (void)setIsAnchor:(BOOL)arg0;
- (void)setGameID:(id)arg0;
- (void)setImageModelArray:(id)arg0;
- (id)imageModelArray;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (void)setIsLandscape:(BOOL)arg0;
- (void)setName:(id)arg0;
- (BOOL)isLandscape;
- (id)name;
- (id)gameID;

@end
