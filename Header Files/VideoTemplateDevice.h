//
//     Generated by private class-dump
//

@interface VideoTemplateDevice : NSObject {
    id /* block */ _worseThan6sJudger;
}

@property (copy, nonatomic) id /* block */ worseThan6sJudger;

+ (void)registerWorseThanIPhone6sJudger:(id /* block */)arg0;
+ (BOOL)isWorseThanIPhone6s;
+ (id)shared;

- (void)setWorseThan6sJudger:(id /* block */)arg0;
- (id /* block */)worseThan6sJudger;
- (void).cxx_destruct;

@end