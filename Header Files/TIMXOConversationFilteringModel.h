//
//     Generated by private class-dump
//

@class NSString;

@interface TIMXOConversationFilteringModel : NSObject {
    BOOL _isStranger;
    int _boxType;
    int _type;
    NSString *_identifier;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) int boxType;
@property (nonatomic) int type;
@property (nonatomic) BOOL isStranger;

- (BOOL)isStranger;
- (void)setIsStranger:(BOOL)arg0;
- (void)setBoxType:(int)arg0;
- (int)boxType;
- (void).cxx_destruct;
- (int)type;
- (id)identifier;
- (void)setType:(int)arg0;
- (void)setIdentifier:(id)arg0;

@end
