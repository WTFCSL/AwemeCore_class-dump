//
//     Generated by private class-dump
//

@class NSString;

@interface AWEVoiceOverNodeDescriptor : NSObject {
    NSString *_classType;
    NSString *_propertyName;
    NSString *_viewIndex;
    NSString *_position;
    NSString *_positionV;
    NSString *_positionH;
    NSString *_visible;
}

@property (copy, nonatomic) NSString *classType;
@property (copy, nonatomic) NSString *propertyName;
@property (copy, nonatomic) NSString *viewIndex;
@property (copy, nonatomic) NSString *position;
@property (copy, nonatomic) NSString *positionV;
@property (copy, nonatomic) NSString *positionH;
@property (copy, nonatomic) NSString *visible;

+ (id)descriptorWithString:(id)arg0;

- (void)addOptionWithString:(id)arg0;
- (void)setViewIndex:(id)arg0;
- (void)setPositionV:(id)arg0;
- (void)setPositionH:(id)arg0;
- (id)positionV;
- (id)positionH;
- (id)visible;
- (void).cxx_destruct;
- (id)position;
- (void)setPosition:(id)arg0;
- (id)propertyName;
- (void)setVisible:(id)arg0;
- (id)classType;
- (void)setPropertyName:(id)arg0;
- (void)setClassType:(id)arg0;
- (id)viewIndex;

@end
